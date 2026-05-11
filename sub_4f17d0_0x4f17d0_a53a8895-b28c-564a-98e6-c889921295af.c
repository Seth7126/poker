// ============================================================
// 函数名称: sub_4f17d0
// 虚拟地址: 0x4f17d0
// WARP GUID: a53a8895-b28c-564a-98e6-c889921295af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

uint32_t __fastcallsub_4f17d0(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void var_1c
    void var_1c
    __builtin_memcpy(&var_1c, arg3, 0x18)
    int32_t eax = arg2 * 0x2345
    bool o = unimplemented  {imul eax, edx, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    void* ebx = data_5301b0 + (eax << 2) - 0x48
    __builtin_memcpy(data_5301b0 + (eax << 2) - 0x37c, data_5301b0 + (eax << 2) - 0x394, 0x18)
    __builtin_memcpy(ebx + 0xc, &var_1c, 0x18)
    *(ebx + 0x24) = arg4
    *(ebx + 0x28) = 0x40400000
    *(ebx + 0x28) = fconvert.s(float.t(*(data_530598 + 0x30)))
    *(ebx + 8) = 2
    *(ebx + 4) = 0
    uint32_t result = GetTickCount()
    *(ebx + 0x2c) = result
    *ebx = 1
    return result
}
