// ============================================================
// 函数名称: sub_4a3350
// 虚拟地址: 0x4a3350
// WARP GUID: ba96b805-4dba-5022-9830-36f88fb0fb71
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49aee8, sub_4033d0, sub_415d18, sub_403010
// [被调用的父级函数]: sub_4a92ac, sub_4a73d0, sub_4a62c0, sub_4aad00
// ============================================================

int32_t __convention("regparm")sub_4a3350(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void var_c
    void* esp_1 = &var_c
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_1c
        esp_1 = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_9 = arg2.b
    sub_415d18(arg1, 0, ecx)
    (**data_53258c)()
    *(esp_1 + 8) = &var_4
    *(esp_1 + 4) = j_sub_4037f0
    TEB* fsbase
    *esp_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1
    int32_t temp0 = data_52fc20
    data_52fc20 += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    if (data_52fc20 == 1)
        *data_5308e0 = sub_49aee8()
    
    *(esp_1 + 8)
    fsbase->NtTib.ExceptionList = *esp_1
    *(esp_1 + 8) = sub_4a33d1
    return (*(*data_53258c + 4))()
}
