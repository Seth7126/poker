// ============================================================
// 函数名称: sub_420cec
// 虚拟地址: 0x420cec
// WARP GUID: 6355af40-69b4-5914-9e74-2c930d7b8cc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4418ec
// ============================================================

int32_t __stdcallsub_420cec(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_5
    int32_t eax_5
    
    if (data_531730 != 0)
        eax_5 = data_531730(arg1, arg2, arg3, arg4)
    
    if (data_531730 != 0 && eax_5 != 0)
        eax_5.b = 1
    else
        eax_5 = 0
    
    char temp1 = eax_5.b
    eax_5.b = neg.b(eax_5.b)
    return sbb.d(eax_5, eax_5, temp1 != 0)
}
