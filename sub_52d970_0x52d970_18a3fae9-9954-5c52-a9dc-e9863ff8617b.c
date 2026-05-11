// ============================================================
// 函数名称: sub_52d970
// 虚拟地址: 0x52d970
// WARP GUID: 18a3fae9-9954-5c52-a9dc-e9863ff8617b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_52d80c
// ============================================================

int32_t __convention("regparm")sub_52d970(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_18 = *arg2
    int32_t var_18 = *arg2
    int32_t var_14
    int32_t* edi = &var_14
    void* esi_1 = &arg2[1]
    *edi = *esi_1
    edi[1] = *(esi_1 + 4)
    int32_t result = 0
    int32_t esi_4 = *(arg1 + 0x18)
    
    if (esi_4 u>= 0)
        int32_t i_1 = esi_4 + 1
        int32_t edx = 0
        int32_t i
        
        do
            int32_t edi_3 = edx * 3
            bool c_1 = unimplemented  {imul edi, edx, 0x3}
            
            if (c_1)
                sub_403010()
                noreturn
            
            int32_t var_10
            
            if (*(*(arg1 + 0x14) + (edi_3 << 2)) == var_18
                    && *(*(arg1 + 0x14) + (edi_3 << 2) + 4) == var_14
                    && *(*(arg1 + 0x14) + (edi_3 << 2) + 8) == var_10)
                result.b = 1
                break
            
            edx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
