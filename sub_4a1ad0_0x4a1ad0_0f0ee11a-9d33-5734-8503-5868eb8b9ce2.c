// ============================================================
// 函数名称: sub_4a1ad0
// 虚拟地址: 0x4a1ad0
// WARP GUID: 0f0ee11a-9d33-5734-8503-5868eb8b9ce2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_4a2d6f, sub_4a2618
// ============================================================

int32_t __convention("regparm")sub_4a1ad0(void* arg1)
{
    // 第一条实际指令: sub_403df8(arg1 + 0xc)
    sub_403df8(arg1 + 0xc)
    sub_403df8(arg1 + 0x28)
    sub_403df8(arg1 + 0x10)
    sub_403df8(arg1 + 0x14)
    sub_403df8(arg1 + 0x24)
    *(arg1 + 0x18) = 0xffffffff
    *(arg1 + 0x20) = 0
    *(arg1 + 0x1c) = 0
    __builtin_memset(arg1 + 0x30, 0, 0x18)
    return (*(**(arg1 + 8) + 0x40))()
}
