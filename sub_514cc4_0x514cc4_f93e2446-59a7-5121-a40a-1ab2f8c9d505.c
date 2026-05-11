// ============================================================
// 函数名称: sub_514cc4
// 虚拟地址: 0x514cc4
// WARP GUID: f93e2446-59a7-5121-a40a-1ab2f8c9d505
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5127fc, sub_40422c, sub_403e1c, sub_4040c4
// [被调用的父级函数]: sub_5166d8, sub_509ed4, sub_4c96bc, sub_511fd8, sub_511e1c, sub_51682b, sub_51621b, sub_4c62e8, sub_515920, sub_5075fc, sub_5168a7, sub_50928c, sub_508998, sub_516544, sub_4ec76c
// ============================================================

int32_t __convention("regparm")sub_514cc4(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t var_c = 0
    sub_40422c(arg2)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1
    void* esi_2
    int32_t edi
    ebp_1, esi_2 = sub_5127fc(arg1, arg1, edi)
    
    if ((*(**(*(*data_530304 + 0x60b0) + 0x208) + 0x14))(arg2) s> 0xc350)
        (*(**(*(*data_530304 + 0x60b0) + 0x208) + 0x40))()
        (*(**(*(*data_530304 + 0x60b0) + 0x208) + 0x34))()
    
    if (*(esi_2 + 0x347) == 0)
        *(ebp_1 - 4)
        (*(**(*(*data_530304 + 0x60b0) + 0x208) + 0x34))()
    else
        sub_4040c4(ebp_1 - 8, ".virt> ", *(ebp_1 - 4))
        *(ebp_1 - 8)
        (*(**(*(*data_530304 + 0x60b0) + 0x208) + 0x34))()
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_514dba
    return sub_403e1c(ebp_1 - 8, 2)
}
