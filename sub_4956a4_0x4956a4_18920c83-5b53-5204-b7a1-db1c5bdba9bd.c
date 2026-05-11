// ============================================================
// 函数名称: sub_4956a4
// 虚拟地址: 0x4956a4
// WARP GUID: 18920c83-5b53-5204-b7a1-db1c5bdba9bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440cb8
// [被调用的父级函数]: sub_495150, sub_49555c
// ============================================================

int32_t __convention("regparm")sub_4956a4(void* arg1)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    
    if (*(arg1 + 0x14) == 0)
        *(arg1 + 0x14) = sub_440cb8(sub_496294, arg1.w, entry_ebx)
    return *(arg1 + 0x14)
}
