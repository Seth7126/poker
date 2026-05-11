// ============================================================
// 函数名称: sub_475900
// 虚拟地址: 0x475900
// WARP GUID: a983c881-8b56-5bab-88ac-6f184c87ec84
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_475900(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t result = *(arg3 + 0xab0) + arg2 * 0x81c0
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t edx_1 = arg1 * 0x23
    bool o_1 = unimplemented  {imul edx, ebx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(result + (edx_1 << 3)) = arg4
    *(result + (edx_1 << 3) + 4) = arg5
    return result
}
