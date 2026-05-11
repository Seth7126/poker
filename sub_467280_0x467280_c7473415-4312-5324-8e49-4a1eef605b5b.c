// ============================================================
// 函数名称: sub_467280
// 虚拟地址: 0x467280
// WARP GUID: c7473415-4312-5324-8e49-4a1eef605b5b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegQueryValueExA
// [内部子函数调用]: sub_40423c, sub_466f7c, sub_403828, sub_40b5a8
// [被调用的父级函数]: sub_467208
// ============================================================

uint32_t __fastcallsub_467280(uint8_t* arg1, int32_t arg2, void* arg3 @ eax, char* arg4)
{
    // 第一条实际指令: enum REG_VALUE_TYPE type = REG_NONE
    enum REG_VALUE_TYPE type = REG_NONE
    PSTR lpValueName = sub_40423c(arg2)
    uint32_t lpcbData
    enum WIN32_ERROR eax_2
    int32_t edx
    eax_2, edx = RegQueryValueExA(*(arg3 + 4), lpValueName, nullptr, &type, arg1, &lpcbData)
    
    if (eax_2 == NO_ERROR)
        uint32_t result = lpcbData
        *arg4 = sub_466f7c(type)
        return result
    
    int32_t var_10 = arg2
    char var_c = 0xb
    edx.b = 1
    sub_40b5a8(0x466ec0, edx, data_530a90, 0, &var_10)
    sub_403828()
    noreturn
}
