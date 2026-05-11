// ============================================================
// 函数名称: sub_403134
// 虚拟地址: 0x403134
// WARP GUID: 60487d6a-1412-5370-8876-f9b6a77e2f3a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405b58
// [被调用的父级函数]: sub_403164
// ============================================================

int32_t __convention("regparm")sub_403134(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 u>= 0xff000000)
    if (arg2 u>= 0xff000000)
        return sub_405b58(arg3, *((arg2 & 0xffffff) + arg1)) __tailcall
    
    if (arg2 u< 0xfe000000)
        jump(arg2)
    
    jump(*(sx.d(arg2.w) + *arg1))
}
