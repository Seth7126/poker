// ============================================================
// 函数名称: sub_420d20
// 虚拟地址: 0x420d20
// WARP GUID: 7253043d-7a21-5ec1-a8ac-e40941e57f76
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_441bc0
// ============================================================

int32_t __stdcallsub_420d20(int32_t arg1)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    
    if (data_531734 != 0)
        eax_2 = data_531734(arg1)
    
    if (data_531734 != 0 && eax_2 != 0)
        eax_2.b = 1
    else
        eax_2 = 0
    
    char temp1 = eax_2.b
    eax_2.b = neg.b(eax_2.b)
    return sbb.d(eax_2, eax_2, temp1 != 0)
}
