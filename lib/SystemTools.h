#ifndef SYSTEMTOOLS_H
#define SYSTEMTOOLS_H

using namespace std;

class SystemTools {
public:
    SystemTools();
    SystemTools(const SystemTools& orig);
    vector<char> driveList();
    virtual ~SystemTools();
private:

};

#endif

