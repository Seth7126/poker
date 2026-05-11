// ============================================================
// 函数名称: sub_52d7c8
// 虚拟地址: 0x52d7c8
// WARP GUID: 02268134-3a43-561e-bc57-1de47cb90d1c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_404868, sub_403430, sub_52d8ac, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_52d7c8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    
    if (arg1[1].b != 0)
        sub_52d8ac(arg1)
    
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(sub_404868(), edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
