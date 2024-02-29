#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

class urlShortener
{
private:
    unordered_map<string, string> HashTable;
    string domain;
    char CharacterArr[62];

    int keyLength;

    string getDomain(string longUrl)
    {

        // Remove Leading and Trailing Spaces
        stringstream ss(longUrl);
        string enteredURL;
        ss >> ws >> enteredURL;

        if (enteredURL.substr(0, 7) == "http://")
        {
            enteredURL = enteredURL.substr(7);
        }
        if (enteredURL.substr(0, 8) == "https://")
        {
            enteredURL = enteredURL.substr(8);
        }
        if (enteredURL.back() == '/')
        {
            enteredURL = enteredURL.substr(0, enteredURL.length() - 1);
        }
        return enteredURL;
    }

    string getKey(string URL)
    {
        string hash = generateKey(URL);
        HashTable[URL] = hash;
        return hash;
    }

    string generateKey(string url)
    {
        string key = "";
        while (true)
        {
            key = "";

            int i = keyLength;
            while (i != 0)
            {
                int randomInt = rand() % 62;    // Generate a random number between 0 and 61 (0-9, A-Z, a-z)
                key += CharacterArr[randomInt]; // Append a character from CharacterArr
                i--;                            // Decrement the length counter
            }

            bool keyExists = false;
            for (const auto &pair : HashTable)
            {
                if (pair.second == key)
                {
                    keyExists = true;
                    break;
                }
            }
            if (!keyExists)
            {
                break;
            }
        }
        return key;
    }

public:
    urlShortener()
    {                  // Default Constructor
        keyLength = 8; // Default Key length
        domain = "https://www.dsIA.com";

        for (int i = 0; i < 62; i++)
        {
            int j = 0;
            if (i < 10)
            {
                j = i + 48;
            }
            else if (i > 9 && i <= 35)
            {
                j = i + 55;
            }
            else
            {
                j = i + 61;
            }
            CharacterArr[i] = static_cast<char>(j);
        }
    }

    urlShortener(int length, string websiteToBeEntered) : urlShortener()
    {
        keyLength = length;
        websiteToBeEntered = getDomain(websiteToBeEntered);
        if (!websiteToBeEntered.empty())
        {
            domain = websiteToBeEntered; // after validation
        }
        else
        {
            cout << "URL is invalid or empty.";
        }
    }

    string urlShorten(string URL)
    {
        string shortURL = getDomain(URL);
        if (HashTable.find(shortURL) != HashTable.end())
        {
            shortURL = domain + "/" + HashTable[shortURL];
        }
        else
        {
            shortURL = domain + "/" + getKey(shortURL);
        }
        return shortURL;
    }

    string urlExpand(string keyURL)
    {
        string longURL = "";
        string key = keyURL.substr(domain.length() + 1);
        for (const auto &pair : HashTable)
        {
            if (pair.second == key)
            {
                longURL = pair.first;
                break;
            }
        }
        return longURL;
    }
};

int main(void)
{

    int key;
    cout << "\nEnter Key Length: ";
    cin >> key;
    urlShortener obj(key, "www.dsIA2.in/");

    int data, choice;
    string website, shortURL, expandedURL;

    do
    {
        cout << "\nMenu\n1.Shorten Website.\n2.Exit";
        cout << "\n\nEnter Choice: ";
        cin >> choice;
        cout << "\n";
        switch (choice)
        {
        case 1:
            printf("\nEnter website to shorten: ");
            cin >> website;
            shortURL = obj.urlShorten(website);
            expandedURL = obj.urlExpand(shortURL);
            cout << "URL: " << website << "\tShortened: " << shortURL << "\tExpanded: " << expandedURL << endl;
            break;

        case 2:
            cout << "Exiting Menu";
            break;

        default:
            cout << "Invalid Choice";
            break;
        }
    } while (choice != 2);
}
