#include <cstdint>
#include <iostream>
using namespace std;

class Block{
    public:
        string sPrevHash;
        string _sHash;
        Block(uint32_t nIndexIn, const string &DataIn);
        string GetHash();
        void MineBlock(uint32_t nDifficulty);
    private:
        uint32_t _nIndex;
        int64_t _nNonce;
        string _sData;
        time_t _tTime;
        string _CalculateHash() const;
};
