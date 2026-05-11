// ============================================================
// 函数名称: sub_47b2ac
// 虚拟地址: 0x47b2ac
// WARP GUID: b71bd5ed-c04b-5255-9ec0-da8f0394537a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_51d270, sub_50e4b0, sub_50e9c0, sub_4e649b
// ============================================================

int32_t __fastcallsub_47b2ac(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
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
    
    bool o_1 = unimplemented  {imul edx, ecx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (arg4 + 0x8000 u<= 0xffff)
        *(result + arg1 * 0x118 - 0x86) = (arg4 + 0x8000).w - 0x8000
        return result
    
    sub_403008()
    noreturn
}
