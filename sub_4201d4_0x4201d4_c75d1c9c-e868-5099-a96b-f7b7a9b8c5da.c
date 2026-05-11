// ============================================================
// 函数名称: sub_4201d4
// 虚拟地址: 0x4201d4
// WARP GUID: c75d1c9c-e868-5099-a96b-f7b7a9b8c5da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420174
// [被调用的父级函数]: sub_4b2754
// ============================================================

int32_t __convention("regparm")sub_4201d4(int32_t arg1)
{
    // 第一条实际指令: if (data_5316bc == 0)
    if (data_5316bc == 0)
        sub_420174()
    
    int32_t eax
    
    if (data_5316c0 != 0)
        eax = data_5316c0(arg1)
    
    if (data_5316c0 != 0 && eax != 0)
        eax.b = 1
    else
        eax = 0
    
    char temp0 = eax.b
    eax.b = neg.b(eax.b)
    return sbb.d(eax, eax, temp0 != 0)
}
