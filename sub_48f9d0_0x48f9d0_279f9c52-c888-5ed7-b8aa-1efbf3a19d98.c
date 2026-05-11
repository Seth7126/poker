// ============================================================
// 函数名称: sub_48f9d0
// 虚拟地址: 0x48f9d0
// WARP GUID: 279f9c52-c888-5ed7-b8aa-1efbf3a19d98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00, sub_4030d0
// [被调用的父级函数]: sub_490ef8
// ============================================================

int32_t __convention("regparm")sub_48f9d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = *arg1
    int32_t* eax = *arg1
    int32_t result
    result.b = eax != 0
    sub_4030d0(eax)
    sub_402d00(arg1, 0x24, 0)
    return result
}
