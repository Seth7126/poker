// ============================================================
// 函数名称: sub_404d30
// 虚拟地址: 0x404d30
// WARP GUID: 9733cfcc-fc5c-5ac2-babc-6cb9e5b1696d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VariantClear, VariantCopyInd
// [内部子函数调用]: sub_403df8, sub_4027e0, sub_404d6e
// [被调用的父级函数]: sub_4148a8, sub_40e3a5, sub_404a88, sub_4050f0, sub_40496c, sub_40e3f8, sub_404f44
// ============================================================

void __convention("regparm")sub_404d30(int16_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == arg2)
    if (arg1 == arg2)
        return 
    
    if (*arg1 u>= 8)
        if (*arg1 == 0x100)
            sub_403df8(&arg1[4])
        else if (*arg1 == 0x101)
            data_5313e8(arg2, arg1)
        else
            VariantClear(arg1)
    
    if (*arg2 u< 8)
        return sub_404d6e(arg1, arg2) __tailcall
    
    if (*arg2 == 0x100)
        void* edx = arg2[2]
        
        if (edx != 0 && *(edx - 8) s> 0xffffffff)
            *(edx - 8) += 1
        
        *arg1 = 0x100
        *(arg1 + 8) = edx
        return 
    
    if (*arg2 == 0x101)
        int16_t* var_4_2 = arg1
        sub_404d6e(arg1, arg2)
        jump(data_5313f0)
    
    *arg1 = 0
    
    if (VariantCopyInd(arg1, arg2) != 0)
        arg1.b = 0x10
        noreturn sub_4027e0(arg1) __tailcall
}
