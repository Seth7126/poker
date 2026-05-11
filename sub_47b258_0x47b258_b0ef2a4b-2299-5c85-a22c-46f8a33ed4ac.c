// ============================================================
// 函数名称: sub_47b258
// 虚拟地址: 0x47b258
// WARP GUID: b0ef2a4b-2299-5c85-a22c-46f8a33ed4ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4807f4, sub_4dd1e0, sub_4dd1d7, sub_47d208, sub_4c8aa0, sub_527aa4
// ============================================================

int32_t __fastcallsub_47b258(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
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
        *(result + arg1 * 0x118 - 0xa) = (arg4 + 0x8000).w - 0x8000
        return result
    
    sub_403008()
    noreturn
}
