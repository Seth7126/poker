// ============================================================
// 函数名称: sub_4034d8
// 虚拟地址: 0x4034d8
// WARP GUID: 294e91be-b4e7-5b17-9e7f-34201d959ee3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RaiseException
// [内部子函数调用]: sub_4034b8
// [被调用的父级函数]: sub_4037f0
// ============================================================

voidsub_4034d8()
{
    // 第一条实际指令: if (data_52e008 u<= 1)
    if (data_52e008 u<= 1)
        return 
    
    int32_t eax
    int32_t var_4 = eax
    int32_t edx
    int32_t var_8 = edx
    char* ecx
    char* var_c = ecx
    uint32_t arguments = sub_4034b8(ecx)
    RaiseException(0xeedfae1, 0, 1, &arguments)
    noreturn
}
