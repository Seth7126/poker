// ============================================================
// 函数名称: sub_490d38
// 虚拟地址: 0x490d38
// WARP GUID: d8fddabe-887c-59e7-b423-b7aea00a8c9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_402d00, sub_403428, sub_490a14, sub_490768, sub_490828, sub_403010
// [被调用的父级函数]: sub_490ef8
// ============================================================

int32_t* __fastcallsub_490d38(int32_t arg1, int32_t arg2, void** arg3 @ eax, int32_t* arg4, int32_t arg5, char arg6, char arg7)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_40 = ebx
    int32_t esi
    int32_t var_44 = esi
    int32_t edi
    int32_t var_48 = edi
    int32_t* esp_1 = &var_48
    
    if (arg2.b != 0)
        void var_58
        esp_1 = &var_58
        arg3 = sub_4033d0(arg1, arg2)
    
    int32_t var_14 = *arg4
    int32_t var_10
    int32_t* edi_1 = &var_10
    void* esi_2 = &arg4[1]
    *edi_1 = *esi_2
    edi_1[1] = *(esi_2 + 4)
    char var_5 = arg2.b
    sub_490a14(arg3, 0, arg1)
    arg3[0xa] = arg1
    arg3[0x10] = arg5
    void var_3a
    sub_490828(&var_3a, &var_14)
    int32_t var_28
    sub_402d00(&var_28, 0x14, 0)
    var_28 = 0x14
    int32_t var_20 = arg5
    void* var_18 = &var_3a
    int32_t var_24 = 0
    
    if (arg7 != 0)
        var_24 = 2
    
    if ((arg6 & 2) != 0)
        int32_t temp2_1 = var_24
        var_24 += 0x20
        
        if (temp2_1 u>= 0xffffffe0)
            sub_403010()
            noreturn
    
    if ((arg6 & 4) != 0)
        int32_t temp3_1 = var_24
        var_24 += 0x40
        
        if (temp3_1 u>= 0xffffffc0)
            sub_403010()
            noreturn
    
    if ((arg6 & 8) != 0)
        int32_t temp4_1 = var_24
        var_24 += 0x80
        
        if (temp4_1 u>= 0xffffff80)
            sub_403010()
            noreturn
    
    if ((arg6 & 0x10) != 0)
        int32_t temp5_1 = var_24
        var_24 += 0x10
        
        if (temp5_1 u>= 0xfffffff0)
            sub_403010()
            noreturn
    
    if ((arg6 & 1) != 0)
        int32_t var_24_1 = var_24 + 0x8000
        
        if (var_24 u>= 0xffff8000)
            sub_403010()
            noreturn
    
    *(esp_1 - 4) = arg3
    __builtin_memcpy(&arg3[5], &var_28, 0x14)
    void** esi_6 = *(esp_1 - 4)
    esi_6[1] = var_14
    esi_6[2] = var_10
    int32_t var_c
    esi_6[3] = var_c
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = &esi_6[4]
    *(esp_1 - 0xc) = &var_28
    int32_t* eax_10 = *(esi_6[0xa] + 4)
    *(esp_1 - 0x10) = eax_10
    void* esp_8 = esp_1
    int32_t* ebp_1
    int32_t* result
    ebp_1, result = sub_490768(esi_6, "Create", (*(*eax_10 + 0xc))())
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(result)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_8
        esp_8 += 0x10
    
    *esp_8
    *(esp_8 + 4)
    *(esp_8 + 8)
    *ebp_1
    return result
}
