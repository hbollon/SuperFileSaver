#include "include/model/FilesPath.h"

using namespace std;

/* Constructors */

FilesPath::FilesPath(string name)
{
    this->name = name;
    this->listSavePath = vector<string>();
    this->listRestorePath = vector<string>();
    this->mapSavePath = map<string, vector<pair<string, string>>>();
    this->mapRestorePath = map<string, vector<pair<string, string>>>();
}

FilesPath::FilesPath(string name, vector<string> listSavePath, vector<string> listRestorePath, map<string, vector<pair<string, string>>> mapSavePath, map<string, vector<pair<string, string>>> mapRestorePath)
{
    this->name = name;
    this->listSavePath = listSavePath;
    this->listRestorePath = listRestorePath;
    this->mapSavePath = mapSavePath;
    this->mapRestorePath = mapRestorePath;
}

/* Methods */

void FilesPath::addSavePath(string pathName, string sourcePath, string targetPath)
{
    if(find(listSavePath.begin(), listSavePath.end(), pathName) != listSavePath.end())
    {
        listSavePath.push_back(pathName);
        mapSavePath.insert(pair<string, vector<pair<string, string>>>(pathName, vector<pair<string, string>>()));
        mapSavePath[pathName].push_back(make_pair(sourcePath, targetPath));
    }
    else
    {
        mapSavePath[pathName].push_back(make_pair(sourcePath, targetPath));
    }

}

void FilesPath::addRestorePath(string pathName, string sourcePath, string targetPath)
{
    if(find(listRestorePath.begin(), listRestorePath.end(), pathName) != listRestorePath.end())
    {
        listRestorePath.push_back(pathName);
        mapRestorePath.insert(pair<string, vector<pair<string, string>>>(pathName, vector<pair<string, string>>()));
        mapRestorePath[pathName].push_back(make_pair(sourcePath, targetPath));
    }
    else
    {
        mapRestorePath[pathName].push_back(make_pair(sourcePath, targetPath));
    }

}

void FilesPath::displaySavePath(string name)
{
    cout << "Nom : " << name << " | SourcePath : " << mapSavePath[name].front().first << " | TargetPath : " << mapSavePath[name].front().second << endl;
}

/* Getters */

string FilesPath::getFilesPathName()
{
    return name;
}

map<string, vector<pair<string, string>>> FilesPath::getSaveMap()
{
    return mapSavePath;
}

map<string, vector<pair<string, string>>> FilesPath::getRestoreMap()
{
    return mapRestorePath;
}

/* Setters */

void FilesPath::setSaveMap(map<string, vector<pair<string, string>>> mapSavePath)
{
    this->mapSavePath.clear();
    this->mapSavePath = mapSavePath;
}

void FilesPath::setRestoreMap(map<string, vector<pair<string, string>>> mapRestorePath)
{
    this->mapRestorePath.clear();
    this->mapRestorePath = mapRestorePath;
}
