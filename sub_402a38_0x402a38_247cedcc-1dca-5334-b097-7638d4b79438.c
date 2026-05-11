// ============================================================
// 函数名称: sub_402a38
// 虚拟地址: 0x402a38
// WARP GUID: 247cedcc-1dca-5334-b097-7638d4b79438
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCommandLineA, GetModuleFileNameA
// [内部子函数调用]: sub_403ee0, sub_4029c0
// [被调用的父级函数]: sub_471144, sub_449890, sub_466adc, sub_473938
// ============================================================

char** __convention("regparm")sub_402a38(int32_t arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    uint8_t var_114[0x108]
    uint8_t (* esp)[0x108] = &var_114
    int32_t ebx_1 = arg1
    char** result
    
    if (ebx_1 != 0)
        char* result_1 = GetCommandLineA()
        
        while (true)
            result = sub_4029c0(result_1, arg2)
            result_1 = result
            
            if (ebx_1 == 0)
                break
            
            if (*arg2 == 0)
                break
            
            ebx_1 -= 1
    else
        uint32_t nSize = 0x105
        uint8_t (* lpFilename)[0x108] = &var_114
        HMODULE hModule = nullptr
        esp = &hModule
        result = arg2
        sub_403ee0(result, &hModule, GetModuleFileNameA(hModule, lpFilename, nSize))
    
    esp[1][0].d
    *(esp + 0x10c)
    *(esp + 0x110)
    return result
}
