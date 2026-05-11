// ============================================================
// 函数名称: sub_497624
// 虚拟地址: 0x497624
// WARP GUID: 88511cac-a1f6-5b12-b525-52a1013d9e01
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_496a58
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_497624(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* edi = esi[0x20]
    arg1.b = edi[2].b
    
    if (arg2 == arg1.b || (esi[8].b & 0x10) != 0)
        return arg1
    
    if (arg1.b == 0)
        void* eax_1
        eax_1.w = esi[0xa].w
        return sub_496a58(&esi[0xb], &esi[0xc], edi, 5, eax_1.w, &esi[0xd])
    
    edi[1]
    return (*(*edi + 8))()
}
