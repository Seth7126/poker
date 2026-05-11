// ============================================================
// 函数名称: sub_463408
// 虚拟地址: 0x463408
// WARP GUID: 6299ac4b-35bc-5753-9db1-cf299e16a504
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460254
// [被调用的父级函数]: sub_461234
// ============================================================

int32_t (__convention("regparm")** __convention("regparm")sub_463408(void* arg1, int32_t arg2))(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t (__convention("regparm")** result_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))()
    int32_t (__convention("regparm")** result_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))()
    *(arg1 + 0x14d) = result_1
    *result_1 = sub_462cec
    int32_t (__convention("regparm")** result)(int32_t* arg1, int32_t arg2)
    
    if (arg2 == 0)
        int32_t eax_10 = (*(*(arg1 + 4) + 4))(result_1)
        int32_t i = 0
        void* edx_7 = &result_1[6]
        
        do
            int32_t i_1 = i
            i += 1
            *edx_7 = (i_1 << 7) + eax_10
            edx_7 += 4
        while (i s< 0xa)
        
        result = result_1
        result[0x10] = 0
    else
        int32_t var_14 = 0
        void* ebx_1 = *(arg1 + 0x3c)
        void* edi_1 = &result_1[0x10]
        
        while (true)
            result = *(arg1 + 0x34)
            
            if (result s<= var_14)
                break
            
            int32_t eax_4 = sub_460254(*(ebx_1 + 0x1c), *(ebx_1 + 8))
            int32_t eax_6 = sub_460254(*(ebx_1 + 0x20), *(ebx_1 + 0xc))
            *edi_1 = (*(*(arg1 + 4) + 0x14))(*(ebx_1 + 0xc), eax_6, eax_4)
            edi_1 += 4
            var_14 += 1
            ebx_1 += 0x54
    
    return result
}
