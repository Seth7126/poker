// ============================================================
// 函数名称: sub_46910c
// 虚拟地址: 0x46910c
// WARP GUID: 952d831d-0895-5d52-8c61-e4f87bc21e3b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404188, sub_40401c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4c1fb8, sub_4748fc, sub_513ae4, sub_520efc, sub_509af8, sub_50dae4, sub_507e90, sub_50e368, sub_50e22c, sub_4c4ceb, sub_4c0cbc, sub_5079cc, sub_4c39c8, sub_50f0e4, sub_50fa27, sub_50dbd4, sub_4d88f8, sub_50deb4, sub_528b98, sub_4c8aa0, sub_51d270, sub_51fdc8, sub_5079c3, sub_529818, sub_508414, sub_4e649b, sub_4e6659, sub_4dd1e0, sub_4dd1d7, sub_50b624, sub_5223e8, sub_4c4c9c, sub_50f7b8, sub_520a94, sub_509bfc, sub_50e4b0, sub_4ed284, sub_507d4c, sub_50732c, sub_50928c, sub_507d3f, sub_50e9c0
// ============================================================

void** __convention("regparm")sub_46910c(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    void* var_10 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = sub_403df8(arg3)
    
    if (*(arg1 + 0xcf9) == 0)
        int32_t i = 0
        bool cond:0_1 = false
        
        do
            int32_t edi_1 = i * 0x1b
            bool o_1 = unimplemented  {imul edi, ebx, 0x1b}
            
            if (o_1)
                sub_403010()
                noreturn
            
            sub_40401c(ecx, arg1 + (edi_1 << 2) + 0x135c)
            ecx = sub_404188(var_10, var_8)
            
            if (not(cond:0_1))
                sub_40401c(ecx, arg1 + (edi_1 << 2) + 0x1384)
                break
            
            i += 1
            cond:0_1 = i != 0x79
        while (i != 0x79)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4691ad
    sub_403df8(&var_10)
    void** result = &var_8
    sub_403df8(result)
    return result
}
