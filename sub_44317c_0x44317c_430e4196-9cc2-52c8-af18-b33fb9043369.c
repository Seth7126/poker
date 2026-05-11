// ============================================================
// 函数名称: sub_44317c
// 虚拟地址: 0x44317c
// WARP GUID: 430e4196-9cc2-52c8-af18-b33fb9043369
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b1f4
// [被调用的父级函数]: sub_44c778, sub_442deb
// ============================================================

int32_t* __convention("regparm")sub_44317c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if ((ebx[0x11].b & 8) == 0)
        return sub_42b1f4(ebx, arg2)
    
    ebx[0x94] = arg2
    arg1.b = 4
    arg1.b = 4 | ebx[0x22].b
    ebx[0x22].b = arg1.b
    return arg1
}
