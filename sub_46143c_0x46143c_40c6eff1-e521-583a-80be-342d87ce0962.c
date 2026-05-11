// ============================================================
// 函数名称: sub_46143c
// 虚拟地址: 0x46143c
// WARP GUID: 40c6eff1-e521-583a-80be-342d87ce0962
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461334, sub_4612e4
// [被调用的父级函数]: sub_46195c, sub_461a0c
// ============================================================

int32_t* __convention("regparm")sub_46143c(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* result_1 = arg2
    int32_t* result_1 = arg2
    int32_t* result
    void* edi
    
    if (arg3 == 0)
        result = result_1
        edi = arg1[&result[5]]
    else
        result = result_1
        edi = arg1[&result[6]]
        result_1 = &result_1[4]
    
    if (edi == 0)
        void* eax = *arg1
        *(eax + 0x14) = 0x31
        *(eax + 0x18) = result_1
        result = (**arg1)(result_1)
    
    if (*(edi + 0x111) == 0)
        sub_461314(arg1, 0xc4)
        int32_t ebp_1 = 0
        int32_t i = 1
        void* eax_3 = edi + 1
        
        do
            i += 1
            int32_t edx_2
            edx_2.b = *eax_3
            eax_3 += 1
            ebp_1 += edx_2
        while (i s<= 0x10)
        
        sub_461334(arg1, ebp_1 + 0x13)
        sub_4612e4(arg1, result_1.b)
        int32_t i_1 = 1
        void* var_18_1 = edi + 1
        
        do
            sub_4612e4(arg1, *var_18_1)
            i_1 += 1
            var_18_1 += 1
        while (i_1 s<= 0x10)
        
        int32_t ebx_1 = 0
        result = edi + 0x11
        int32_t* result_2 = result
        
        if (ebp_1 s> 0)
            do
                result = sub_4612e4(arg1, *result_2)
                ebx_1 += 1
                result_2 += 1
            while (ebp_1 s> ebx_1)
        
        *(edi + 0x111) = 1
    
    return result
}
