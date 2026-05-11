// ============================================================
// 函数名称: sub_47b304
// 虚拟地址: 0x47b304
// WARP GUID: 4c4f6587-707b-5008-9c6e-288cdd07cff4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_472ccc, sub_4e6659, sub_50c5e0, sub_4735d8, sub_471144, sub_4c5694, sub_517120, sub_4c2418, sub_4c9540, sub_50b1ac, sub_50e4b0, sub_50e9c0, sub_4e649b
// ============================================================

int32_t __fastcallsub_47b304(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
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
        *(result + arg1 * 0x118 - 0x84) = (arg4 + 0x8000).w - 0x8000
        return result
    
    sub_403008()
    noreturn
}
