// ============================================================
// 函数名称: sub_4b29bc
// 虚拟地址: 0x4b29bc
// WARP GUID: d38b0a8b-6cbf-5a96-a4d5-4d2a416fde23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4032ac, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b29bc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    arg1[0x84] = SendMessageA(sub_4318d0(arg1), 0x400, 0, 0)
    int32_t* ebx
    ebx.w = 0xffb6
    sub_4032ac(arg1)
    *(arg2 + 0xc) = 0
    return 0
}
