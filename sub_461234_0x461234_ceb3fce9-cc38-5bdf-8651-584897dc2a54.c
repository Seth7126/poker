// ============================================================
// 函数名称: sub_461234
// 虚拟地址: 0x461234
// WARP GUID: ceb3fce9-cc38-5bdf-8651-584897dc2a54
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4654a8, sub_4642f8, sub_461a84, sub_46390c, sub_4669a8, sub_463408, sub_462bf8, sub_464970, sub_462540, sub_4626e0
// [被调用的父级函数]: sub_460dc8
// ============================================================

int32_t __convention("regparm")sub_461234(int32_t* arg1)
{
    // 第一条实际指令: sub_462540(arg1, 0)
    sub_462540(arg1, 0)
    
    if (arg1[0x2a] == 0)
        sub_46390c(arg1)
        sub_462bf8(arg1, 0, sub_4642f8(arg1))
    
    sub_464970(arg1)
    
    if (arg1[0x2b] != 0)
        *(*arg1 + 0x14) = 1
        (**arg1)()
    else if (*(arg1 + 0xd9) == 0)
        sub_4669a8(arg1)
    else
        sub_4654a8(arg1)
    
    int32_t edx_3
    
    if (arg1[0x28] s> 1 || arg1[0x2c] != 0)
        edx_3 = 1
    else
        edx_3 = 0
    
    sub_4626e0(arg1, 0, sub_463408(arg1, edx_3))
    sub_461a84(arg1)
    (*(arg1[1] + 0x18))()
    return (*(*(arg1 + 0x151) + 4))()
}
