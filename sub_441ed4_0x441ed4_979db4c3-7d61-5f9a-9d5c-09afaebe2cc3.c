// ============================================================
// 函数名称: sub_441ed4
// 虚拟地址: 0x441ed4
// WARP GUID: 979db4c3-7d61-5f9a-9d5c-09afaebe2cc3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b2f0, sub_42b31c, sub_42b220, sub_42b1dc, sub_441770
// [被调用的父级函数]: sub_441ebc
// ============================================================

void __convention("regparm")sub_441ed4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    (*(*arg2 + 0x40))()
    uint32_t eax_2 = zx.d(*(arg1[0x7c] + 0x1a))
    int32_t var_30 = var_30 - eax_2
    int32_t var_28 = var_28 + eax_2
    uint32_t eax_4 = zx.d(*(arg1[0x7d] + 0x1a))
    int32_t var_2c
    int32_t var_2c_1 = var_2c - eax_4
    int32_t var_24
    int32_t var_24_1 = var_24 + eax_4
    void var_18
    sub_42b2f0(arg2, &var_30, &var_18)
    int32_t var_20
    sub_42b31c(arg1, &var_18, &var_20)
    var_30 = var_20
    sub_42b2f0(arg2, &var_28, &var_18)
    sub_42b31c(arg1, &var_18, &var_20)
    var_28 = var_20
    int32_t var_1c
    int32_t var_24_2 = var_1c
    int32_t esi_1 = var_30
    
    if (esi_1 s>= 0)
        int32_t eax_15 = sub_42b1dc(arg1)
        int32_t ebp_1 = var_28
        
        if (eax_15 s< ebp_1)
            if (sub_42b1dc(arg1) s< ebp_1 - esi_1)
                var_28 = sub_42b1dc(arg1) + var_30
            
            void* esi_2 = arg1[0x7c]
            int32_t eax_22 = sub_42b1dc(arg1)
            sub_441770(esi_2, *(esi_2 + 0xc) + var_28 - eax_22)
    else
        void* eax_13 = arg1[0x7c]
        sub_441770(eax_13, *(eax_13 + 0xc) + esi_1)
    
    if (var_1c s< 0)
        void* eax_24 = arg1[0x7d]
        sub_441770(eax_24, *(eax_24 + 0xc) + var_1c)
        return 
    
    if (sub_42b220(arg1) s>= var_24_2)
        return 
    
    if (sub_42b220(arg1) s< var_24_2 - var_1c)
        var_24_2 = sub_42b220(arg1) + var_1c
    
    void* esi_4 = arg1[0x7d]
    int32_t eax_32 = sub_42b220(arg1)
    sub_441770(esi_4, *(esi_4 + 0xc) + var_24_2 - eax_32)
}
