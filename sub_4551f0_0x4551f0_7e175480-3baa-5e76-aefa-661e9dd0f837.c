// ============================================================
// 函数名称: sub_4551f0
// 虚拟地址: 0x4551f0
// WARP GUID: 7e175480-3baa-5e76-aefa-661e9dd0f837
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_454e00
// [被调用的父级函数]: sub_45591c
// ============================================================

void* __fastcallsub_4551f0(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* esi = arg3[1]
    
    if (arg2 != 1)
        void* eax = *arg3
        *(eax + 0x14) = 0xc
        *(eax + 0x18) = arg2
        (**arg3)()
    
    void* result = sub_454e00(arg3, arg2, 0x80)
    *result = 0
    *(result + 4) = arg5
    *(result + 8) = arg6
    *(result + 0xc) = arg4
    *(result + 0x20) = arg1
    *(result + 0x28) = 0
    *(result + 0x2c) = *(esi + 0x44)
    *(esi + 0x44) = result
    return result
}
