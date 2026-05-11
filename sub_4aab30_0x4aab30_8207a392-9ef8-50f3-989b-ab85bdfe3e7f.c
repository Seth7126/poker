// ============================================================
// 函数名称: sub_4aab30
// 虚拟地址: 0x4aab30
// WARP GUID: 8207a392-9ef8-50f3-989b-ab85bdfe3e7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ac078, sub_403248, sub_4a5428, sub_4038c8, sub_40cc98, sub_494050, sub_494048
// [被调用的父级函数]: sub_4ab790
// ============================================================

int32_tsub_4aab30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    sub_494048(data_5325ec)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    char var_d = 1
    int32_t* var_2c = &var_4
    int32_t (* var_30)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = (*data_5302e8)(arg2, ExceptionList, var_30, var_2c, ExceptionList_1, var_24, var_20)
    int32_t eax_6
    int32_t edx
    eax_6, edx = (*data_530328)(arg2)
    edx.b = 1
    int32_t* var_c = sub_4ac078(sub_4a9f84+0x1cc, edx, eax_3)
    
    if (eax_6 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_4038c8(ExceptionList_1)
        return arg1
    
    void* eax_9 = sub_4a5428(eax_6)
    (*data_53079c)(arg2)
    int32_t eax_15 = (*data_52ff04)(arg2)
    int32_t* edi_2 = *(eax_9 + 0xc)
    int32_t entry_ebx
    
    if (sub_403248(edi_2, 0x4a9e20) != 0)
        var_d = (*(*edi_2 + 0x68))(entry_ebx)
    
    int32_t* edi_3 = *(eax_9 + 0xc)
    
    if (sub_403248(edi_3, 0x4a9fcc) != 0)
        var_d = (*(*edi_3 + 0x4c))(entry_ebx)
    
    if (arg1 s<= 0 || eax_15 s> *(*(eax_9 + 0x10) + 0x14))
        arg1 = 0
    
    sub_40cc98(&var_c)
    fsbase->NtTib.ExceptionList = entry_ebx
    int32_t var_8_1
    
    if (var_d == 0 || arg1 s<= 0)
        var_8_1 = 0
    else
        var_8_1 = 1
    
    fsbase->NtTib.ExceptionList = var_8_1
    __return_addr = &data_4aac7a
    return sub_494050(data_5325ec)
}
