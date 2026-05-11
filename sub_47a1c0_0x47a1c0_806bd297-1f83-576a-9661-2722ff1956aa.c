// ============================================================
// 函数名称: sub_47a1c0
// 虚拟地址: 0x47a1c0
// WARP GUID: 806bd297-1f83-576a-9661-2722ff1956aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_51f90c, sub_4d4f84, sub_527454, sub_512690, sub_4cc428, sub_4d6b10, sub_46e17c, sub_518820, sub_5079cc, sub_50fa27, sub_51e1c0, sub_52ba68, sub_4d88f8, sub_51260b, sub_4d78f8, sub_51dbe0, sub_4c8aa0, sub_5079c3, sub_4dad04, sub_4e649b, sub_4e6659, sub_51b730, sub_4dd1e0, sub_50c5e0, sub_4dd1d7, sub_4c96bc, sub_46e0ac, sub_4c62e8, sub_476bc0, sub_46e16f, sub_475d3c, sub_50f7b8, sub_472c3c, sub_5295d8, sub_50e4b0, sub_51859c, sub_4eca48, sub_509ed4, sub_509dc4, sub_4eca00, sub_4702a8, sub_4c8a8f, sub_4d7ff0, sub_4c8a23, sub_51866c, sub_4f8b60, sub_47a9e0, sub_50e9c0
// ============================================================

int32_t __fastcallsub_47a1c0(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
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
    
    int32_t ecx_1
    ecx_1.b = arg4
    *(result + arg1 * 0x118 - 0xf1) = ecx_1.b
    return result
}
