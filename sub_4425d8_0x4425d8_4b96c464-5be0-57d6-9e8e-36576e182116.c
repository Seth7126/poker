// ============================================================
// 函数名称: sub_4425d8
// 虚拟地址: 0x4425d8
// WARP GUID: 4b96c464-5be0-57d6-9e8e-36576e182116
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42afdc, sub_42b928, sub_441b0c, sub_42a50c, sub_42afb8, sub_403018, sub_42affc, sub_431a10, sub_42b89c, sub_403428, sub_41f53c, sub_447294, sub_42af98, sub_4431dc, sub_41920c
// [被调用的父级函数]: sub_44c644
// ============================================================

int32_t* __convention("regparm")sub_4425d8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    sub_441b0c(arg1, 0)
    arg1[0x10] = 0xab
    sub_42af98(arg1)
    sub_42afb8(arg1)
    sub_42afdc(arg1, 0x140)
    sub_42affc(arg1, 0xf0)
    sub_4431dc(arg1, 0)
    sub_42b928(arg1, 0)
    sub_42b89c(arg1, 0)
    sub_431a10(arg1, 1)
    arg1[0x84].b = 7
    *(arg1 + 0x211) = 2
    *(arg1 + 0x213) = 0
    *(arg1 + 0x219) = 3
    int32_t edx_3
    edx_3.b = 1
    int32_t* eax_9 = sub_41f53c(sub_41799a+0x222, edx_3)
    arg1[0x8a] = eax_9
    *(esp_1 - 4) = 0x31
    (*data_5302cc)()
    (*(*eax_9 + 0x40))()
    *(esp_1 - 4) = 0x32
    (*data_5302cc)()
    void* esp_5 = esp_1
    (*(*arg1[0x8a] + 0x34))()
    void* eax_18 = arg1[0x8a]
    *(eax_18 + 0xc) = arg1
    *(eax_18 + 8) = sub_442e78
    arg1[0x8b].b = 0
    int32_t edx_6
    edx_6.b = 1
    int32_t esi_2 = sub_41920c(sub_426fb7+0x21, edx_6)
    arg1[0x88] = esi_2
    sub_42a50c(esi_2, arg1)
    arg1[0x91] = *(data_5317dc + 0x34)
    *(arg1 + 0x21d) = 1
    arg1[0x29] = sub_403018(arg1)
    sub_447294(data_5317dc, arg1)
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_5
        esp_5 += 0x10
    
    *esp_5
    *(esp_5 + 4)
    *(esp_5 + 8)
    *(esp_5 + 0xc)
    return arg1
}
