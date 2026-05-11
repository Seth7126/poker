// ============================================================
// 函数名称: sub_4337f8
// 虚拟地址: 0x4337f8
// WARP GUID: 9f3b4a0b-c30c-5b9b-9ded-3bd0a78cf939
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4339c0, sub_4339c4, sub_4033d0, sub_42e7fc, sub_42e838, sub_4030a0, sub_43334c, sub_433528, sub_419090, sub_41fda0, sub_418f10
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4337f8(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* esp_1 = &var_1c
    
    if (arg2.b != 0)
        void var_2c
        esp_1 = &var_2c
        arg1 = sub_4033d0(arg3, arg2)
    
    char var_9 = arg2.b
    sub_4030a0(arg3, 0)
    arg1[3] = 4
    arg1[5] = arg3
    arg1[0x1c] = 0x40000
    arg1[6] = 0xc
    void* const eax_5
    eax_5.b = *(arg3 + 0x4b)
    
    if (eax_5.b == 1 || eax_5.b == 2)
        eax_5 = nullptr
    else
        eax_5.b = 1
    
    arg1[7].b = eax_5.b
    int32_t* edx_1
    edx_1.b = 1
    arg1[0x19] = sub_43334c(sub_428598+0x154, edx_1, arg1)
    int32_t* edx_2
    edx_2.b = 1
    arg1[4] = sub_418f10(sub_4172a2+0x206, edx_2)
    sub_41fda0(0, 0xffffff)
    sub_419090()
    sub_4339c0(arg1)
    esp_1[7] = &var_4
    esp_1[6] = j_sub_4037f0
    TEB* fsbase
    esp_1[5] = fsbase->NtTib.ExceptionList
    void* esp_5 = &esp_1[5]
    fsbase->NtTib.ExceptionList = esp_5
    int32_t i_2
    int32_t ecx_1
    i_2, ecx_1 = sub_42e838(arg3)
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t esi_1 = 0
        int32_t i
        
        do
            *(esp_5 - 4) = 0
            sub_42e7fc(arg3, esi_1)
            ecx_1.b = 3
            (*(*arg1 + 8))()
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_433528(arg1[0x19])
    *(esp_5 + 8)
    fsbase->NtTib.ExceptionList = *esp_5
    *(esp_5 + 8) = sub_43390b
    return sub_4339c4(arg1)
}
