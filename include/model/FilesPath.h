#ifndef FILESPATH_H
#define FILESPATH_H

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class FilesPath
{
private:
    string name;
    vector<string> listSavePath;
    vector<string> listRestorePath;
    map<string, vector<pair<string, string>>> mapSavePath;
    map<string, vector<pair<string, string>>> mapRestorePath;

public:
    FilesPath(string name);
    FilesPath(string name, vector<string> listSavePath, vector<string> listRestorePath, map<string, vector<pair<string, string>>> mapSavePath, map<string, vector<pair<string, string>>> mapRestorePath);

    void addSavePath(string pathName, string sourcePath, string targetPath);
    void addRestorePath(string pathName, string sourcePath, string targetPath);
    void removeSavePath(string name);
    void removeRestorePath(string name);
    void editSavePath(string name, string sourcePath, string targetPath);
    void editRestorePath(string name, string sourcePath, string targetPath);
    void displaySavePath(string name);

    void importListPath();
    void exportListPath();

    string getFilesPathName();
    map<string, vector<pair<string, string>>> getSaveMap();
    map<string, vector<pair<string, string>>> getRestoreMap();

    void setSaveMap(map<string, vector<pair<string, string>>> mapSavePath);
    void setRestoreMap(map<string, vector<pair<string, string>>> mapRestorePath);

};


#endif // FILESPATH_H
