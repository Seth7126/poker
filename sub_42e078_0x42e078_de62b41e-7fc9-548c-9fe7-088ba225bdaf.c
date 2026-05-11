// ============================================================
// 函数名称: sub_42e078
// 虚拟地址: 0x42e078
// WARP GUID: de62b41e-7fc9-548c-9fe7-088ba225bdaf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_42e7fc, sub_4105a0, sub_42e838, sub_410524, sub_42dc7c, sub_42dcdc
// [被调用的父级函数]: sub_42e220
// ============================================================

int32_t* __convention("regparm")sub_42e078(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    (*(**(arg2 - 8) + 8))()
    
    if (*(arg2 - 0xc) != 0)
        if (arg1.b == 0 || *(*(arg2 - 0xc) + 0x47) != 0)
        label_42e0c5:
            
            if (arg1.b == *(*(arg2 - 0xc) + 0x4b))
                sub_4103c8(*(arg2 - 8), *(arg2 - 0xc))
        else if ((*(*(arg2 - 0xc) + 0x20) & 0x10) != 0 && (*(*(arg2 - 0xc) + 0x41) & 4) == 0)
            goto label_42e0c5
    
    int32_t i_3
    void* ecx
    i_3, ecx = sub_42e838(*(arg2 - 0x10))
    int32_t var_8
    
    if (i_3 - 1 s>= 0)
        int32_t i_2 = i_3
        var_8 = 0
        int32_t i
        
        do
            void* eax_20 = sub_42e7fc(*(arg2 - 0x10), var_8)
            
            if (arg1.b == *(eax_20 + 0x4b))
                if (arg1.b == 0 || *(eax_20 + 0x47) != 0 || 0x401 == (0x401 & *(eax_20 + 0x40)))
                label_42e13a:
                    
                    if (eax_20 != *(arg2 - 0xc))
                        int32_t j
                        
                        for (j = 0; j s< *(*(arg2 - 8) + 8); j += 1)
                            if (sub_42dc7c(eax_20, sub_410524(*(arg2 - 8), j), arg1) != 0)
                                break
                        
                        ecx = sub_4105a0(*(arg2 - 8), j, eax_20)
                else if ((*(eax_20 + 0x20) & 0x10) != 0 && (*(eax_20 + 0x41) & 4) == 0)
                    goto label_42e13a
            
            var_8 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t* result = *(*(arg2 - 8) + 8) - 1
    
    if (result s>= 0)
        void* var_c_1 = result + 1
        var_8 = 0
        int32_t i_1
        
        do
            void* eax_36 = ebp[2]
            result = sub_410524(*(ebp[2] - 8), ebp[-1])
            ebp = sub_42dcdc(result, arg1.b, ecx)
            ecx = eax_36
            ebp[-1] += 1
            i_1 = ebp[-2]
            ebp[-2] -= 1
        while (i_1 != 1)
    
    return result
}
