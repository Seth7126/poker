// ============================================================
// 函数名称: sub_441174
// 虚拟地址: 0x441174
// WARP GUID: 90389fb9-edbd-5de1-a9b3-9c568b54fc6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e7fc, sub_42e838, sub_44110c, sub_4418a8, sub_4410a0
// [被调用的父级函数]: sub_441d44
// ============================================================

void* __convention("regparm")sub_441174(void* arg1)
{
    // 第一条实际指令: int32_t* ebx = *(arg1 + 4)
    int32_t* ebx = *(arg1 + 4)
    
    if (ebx[0x7e].b == 0)
        return arg1
    
    if ((*(*ebx + 0xb4))() == 0)
        return sub_4418a8(arg1, 0)
    
    int32_t var_10_1 = 0
    int32_t ebx_2 = sub_42e838(*(arg1 + 4)) - 1
    
    if (ebx_2 s>= 0)
        int32_t i_1 = ebx_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            int32_t __saved_ebp
            
            if (*(arg1 + 0x18) != 0)
                int32_t* var_1c_2 = &__saved_ebp
                void* eax_12
                void* edx_5
                eax_12, edx_5 = sub_42e7fc(*(arg1 + 4), esi_1)
                sub_44110c(eax_12, edx_5)
            else
                int32_t* var_1c_1 = &__saved_ebp
                void* eax_9
                void* edx_3
                eax_9, edx_3 = sub_42e7fc(*(arg1 + 4), esi_1)
                sub_4410a0(eax_9, edx_3)
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return sub_4418a8(arg1, zx.d(*(arg1 + 0x1a)))
}
