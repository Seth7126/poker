// ============================================================
// 函数名称: sub_4d954c
// 虚拟地址: 0x4d954c
// WARP GUID: ab983f3f-83cc-50a2-9d7c-6fc303bdf9ca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47b488, sub_4030d0, sub_4040c4, sub_404078, sub_42b690, sub_4b51e4, sub_483950, sub_4b50d0, sub_4318d0, sub_40401c, sub_403010, sub_402bc0, sub_40287c, sub_403e1c, sub_402b90, sub_47b650, sub_404280, sub_42da10
// [被调用的父级函数]: sub_4d9704
// ============================================================

int32_tsub_4d954c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_84 = ebx
    int32_t esi
    int32_t var_88 = esi
    int32_t edi
    int32_t var_8c = edi
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t* var_90 = &var_4
    int32_t var_94 = 0x4d96e1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_4318d0(data_61c8c8)
    edx.b = 1
    int32_t* eax_2 = sub_42da10(&data_4b3d30, edx, eax_1)
    sub_42b690(eax_2, 0)
    int32_t* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_4b50d0(eax_2, **(data_61c8c8 + 0xa64))
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
    sub_47b488(data_61cbd4, data_61cac0, data_61c8c8, 1)
    void var_8
    void* esp_1 = &var_8
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
            int32_t eax_26 = sub_404078(*(ebp_1 - 8))
            
            if (add_overflow(eax_26, 0xfffffffc))
                sub_403010()
                noreturn
            
            sub_404280(eax_26 - 4, 1, *(ebp_1 - 8))
            *(esp_1 - 4) = 0
            esp_1 -= 4
            sub_47b650(data_61c8c8, data_61cbd8, *(ebp_1 - 8))
            *(ebp_1 - 4) += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_4030d0(ebx_2)
    *(esp_1 + 8)
    fsbase->NtTib.ExceptionList = *esp_1
    *(esp_1 + 8) = 0x4d96e8
    return sub_403e1c(ebp_1 - 0x10, 3)
}
