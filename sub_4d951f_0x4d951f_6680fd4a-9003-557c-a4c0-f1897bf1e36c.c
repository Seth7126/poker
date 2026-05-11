// ============================================================
// 函数名称: sub_4d951f
// 虚拟地址: 0x4d951f
// WARP GUID: 6680fd4a-9003-557c-a4c0-f1897bf1e36c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47b488, sub_4030d0, sub_4040c4, sub_404078, sub_42b690, sub_4b51e4, sub_483950, sub_4b50d0, sub_4836b0, sub_40401c, sub_4d9378, sub_403010, sub_40287c, sub_403e1c, sub_402b90, sub_47b650, sub_404280, sub_402bc0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4d951f(char* arg1, char* arg2, int32_t arg3, void* arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: int32_t temp0_1 = *0x5c000000
    int32_t temp0_1 = *0x5c000000
    *0x5c000000 += 1
    int32_t* entry_ebx
    bool c
    
    if (c)
        if (temp0_1 == 0xffffffff || c)
            arg3:1.b &= arg2:1.b
            jump(*(arg3 + &data_61c8c8))
        
        *arg1 += arg1.b
        *arg2 += arg1.b
        arg3:1.b -= *arg5
        *(arg4 - 0x75) += arg2.b
        int32_t eflags
        arg1.b = __in_al_dx(arg2.w, eflags)
        int32_t* var_4 = entry_ebx
        sub_4d9378()
        return sub_4836b0(arg1, data_61cac4)
    
    sub_42b690(entry_ebx, 0)
    int32_t* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_4b50d0(entry_ebx, **(data_61c8c8 + 0xa64))
    sub_4040c4(ebp_1 - 0xc, *(data_61c8c8 + 0xa64), "\save")
    *(ebp_1 - 0xc)
    (*(*ebx_2 + 0xcc))()
    sub_402bc0(ebp_1 - 0x48, 0x4d9700)
    bool o = unimplemented  {imul eax, eax, 0x33}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_40287c(3, 1, zx.d(*(data_780c58 + 4)) * 0x33 + &data_780a88, ebp_1 - 0x7c)
    sub_40401c(sub_402b90(ebp_1 - 0x48, ebp_1 - 0x7c, 0x34), ebp_1 - 0x48)
    sub_4b51e4(ebx_2, *(ebp_1 - 0x10))
    sub_483950(data_61c8c8, data_61cac0)
    int32_t var_4_2 = 1
    sub_47b488(data_61cbd4, data_61cac0, data_61c8c8, 1)
    void* const* esp_1 = &__return_addr
    int32_t i_1 = (*(*ebx_2[0x7c] + 0x14))()
    
    if (i_1 s> 0)
        *(ebp_1 - 4) = 1
        int32_t i
        
        do
            if (add_overflow(*(ebp_1 - 4), 0xffffffff))
                sub_403010()
                noreturn
            
            (*(*ebx_2[0x7c] + 0xc))()
            *(esp_1 - 4) = ebp_1 - 8
            int32_t eax_25 = sub_404078(*(ebp_1 - 8))
            
            if (add_overflow(eax_25, 0xfffffffc))
                sub_403010()
                noreturn
            
            sub_404280(eax_25 - 4, 1, *(ebp_1 - 8))
            *(esp_1 - 4) = 0
            esp_1 -= 4
            sub_47b650(data_61c8c8, data_61cbd8, *(ebp_1 - 8))
            *(ebp_1 - 4) += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_4030d0(ebx_2)
    esp_1[2]
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x4d96e8
    return sub_403e1c(ebp_1 - 0x10, 3)
}
