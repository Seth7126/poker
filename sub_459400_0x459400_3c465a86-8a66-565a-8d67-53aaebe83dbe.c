// ============================================================
// 函数名称: sub_459400
// 虚拟地址: 0x459400
// WARP GUID: 3c465a86-8a66-565a-8d67-53aaebe83dbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4594a0
// ============================================================

int32_t* __convention("regparm")sub_459400(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = (**(arg1 + 4))()
    int32_t* result = (**(arg1 + 4))()
    int32_t i = 0
    void* var_14 = &data_52ed04
    int32_t* result_1 = result
    
    do
        int32_t j = 0
        int32_t* result_2 = result_1
        void* ebx_1 = var_14
        
        do
            int32_t eax_2
            eax_2.b = *ebx_1
            int32_t ecx_4 = (0xff - eax_2 * 2) * 0xff
            int32_t eax_8
            
            if (ecx_4 s>= 0)
                eax_8 = divs.dp.d(sx.q(ecx_4), (arg2 << 9) - 0x200)
            else
                eax_8 = neg.d(divs.dp.d(sx.q(neg.d(ecx_4)), (arg2 << 9) - 0x200))
            
            *result_2 = eax_8
            j += 1
            result_2 = &result_2[1]
            ebx_1 += 1
        while (j s< 0x10)
        
        i += 1
        var_14 += 0x10
        result_1 = &result_1[0x10]
    while (i s< 0x10)
    
    return result
}
