// ============================================================
// 函数名称: sub_431ce8
// 虚拟地址: 0x431ce8
// WARP GUID: 8a90413b-474a-5145-bc73-6e1b391b3a68
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_4030a0, sub_410524, sub_410580
// [被调用的父级函数]: sub_431df4, sub_444ce0
// ============================================================

int32_t __convention("regparm")sub_431ce8(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, int32_t arg3, char arg4, char arg5)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    char var_9 = arg3.b
    int32_t edi_1 = arg2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    int32_t* var_10 = nullptr
    arg2.b = 1
    int32_t* eax_1 = sub_4030a0(arg3, arg2)
    __return_addr = &var_4
    var_4 = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.w = 0xffb8
    sub_4032ac(ExceptionList, eax_1)
    
    if (eax_1[2] s> 0)
        int32_t var_14_1 = sub_410580(eax_1, edi_1)
        
        if (var_14_1 == 0xffffffff)
            if (var_9 == 0)
                var_14_1 = 0
            else
                var_14_1 = eax_1[2] - 1
        
        int32_t esi_1 = var_14_1
        
        do
            if (var_9 == 0)
                if (esi_1 == 0)
                    esi_1 = eax_1[2]
                
                esi_1 -= 1
            else
                esi_1 += 1
                
                if (esi_1 == eax_1[2])
                    esi_1 = 0
            
            int32_t* eax_12 = sub_410524(eax_1, esi_1)
            ebx.w = 0xffbc
            
            if (sub_4032ac(eax_12) != 0 && (arg5 == 0 || eax_12[0x5d].b != 0)
                    && (arg4 == 0 || eax_12[9] == ExceptionList))
                var_10 = eax_12
            
            if (var_10 != 0)
                break
        while (esi_1 != var_14_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = sub_431de5
    return sub_4030d0(eax_1)
}
