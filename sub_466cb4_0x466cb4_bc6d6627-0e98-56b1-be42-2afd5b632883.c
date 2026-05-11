// ============================================================
// 函数名称: sub_466cb4
// 虚拟地址: 0x466cb4
// WARP GUID: bc6d6627-0e98-56b1-be42-2afd5b632883
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadLibraryA, GetProcAddress
// [内部子函数调用]: sub_466adc
// [被调用的父级函数]: 无
// ============================================================

voidsub_466cb4()
{
    // 第一条实际指令: int32_t temp0 = data_5320ac
    int32_t temp0 = data_5320ac
    data_5320ac -= 1
    
    if (temp0 u>= 1 || sub_466adc().b != 0)
        return 
    
    data_52f470 = LoadLibraryA("DDraw.dll")
    data_53208c = GetProcAddress(data_52f470, "DirectDrawEnumerateA")
    data_532090 = GetProcAddress(data_52f470, "DirectDrawEnumerateW")
    data_532094 = data_53208c
    data_532098 = GetProcAddress(data_52f470, "DirectDrawEnumerateExA")
    data_53209c = GetProcAddress(data_52f470, "DirectDrawEnumerateExW")
    data_5320a0 = data_532098
    data_5320a4 = GetProcAddress(data_52f470, "DirectDrawCreate")
    data_5320a8 = GetProcAddress(data_52f470, "DirectDrawCreateClipper")
}
