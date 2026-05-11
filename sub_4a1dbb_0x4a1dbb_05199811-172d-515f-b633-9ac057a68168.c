// ============================================================
// 函数名称: sub_4a1dbb
// 虚拟地址: 0x4a1dbb
// WARP GUID: 05199811-172d-515f-b633-9ac057a68168
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49d860, sub_49d978, sub_404078, sub_49f714, sub_408e1c, sub_404080, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a1dbb(char* arg1, char arg2, int32_t* arg3 @ esi, int32_t* arg4, int32_t arg5, int32_t arg6, char* arg7, int32_t arg8)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    arg1[0x72] += arg2
    int32_t eflags
    uint16_t temp0
    temp0, temp0 = __insd(__return_addr.w, arg4.w, eflags)
    void* const edi
    edi.w = temp0
    *edi = temp0
    int32_t edi_1 = arg5
    int32_t esi = arg6
    char* arg_3c
    char* eax = arg_3c
    *eax += eax.b
    arg_3c = arg7
    int32_t* ebp_1 = &arg_3c
    __builtin_memset(&arg6, 0, 0x18)
    arg5 = arg8
    int32_t arg_1c = esi
    int32_t arg_18 = edi_1
    char* ebx_1 = eax
    arg4 = &arg_3c
    int32_t (* arg_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    int32_t edx_2
    edx_2, ecx = (*(**(ebx_1 + 8) + 0x40))()
    int32_t* esi_1 = *(ebx_1 + 8)
    
    if (sub_404078(*(ebx_1 + 0xc)) s> 0)
        ecx, edx_2 = sub_49f714(esi_1, "Connection", *(ebx_1 + 0xc))
    
    if (sub_404078(*(ebx_1 + 0x28)) s> 0)
        ecx, edx_2 = sub_49f714(esi_1, "Content-Version", *(ebx_1 + 0x28))
    
    if (sub_404078(*(ebx_1 + 0x10)) s> 0)
        ecx, edx_2 = sub_49f714(esi_1, "Content-Encoding", *(ebx_1 + 0x10))
    
    if (sub_404078(*(ebx_1 + 0x14)) s> 0)
        ecx, edx_2 = sub_49f714(esi_1, "Content-Language", *(ebx_1 + 0x14))
    
    if (sub_404078(*(ebx_1 + 0x24)) s> 0)
        ecx, edx_2 = sub_49f714(esi_1, "Content-Type", *(ebx_1 + 0x24))
    
    int32_t edi_2 = *(ebx_1 + 0x18)
    
    if (edi_2 s>= 0)
        struct _EXCEPTION_REGISTRATION_RECORD* arg_38
        sub_408e1c(edi_2, &arg_38)
        ecx, edx_2 = sub_49f714(esi_1, "Content-Length", arg_38)
    
    int32_t eax_20
    
    if (sub_404078(*(ebx_1 + 4)) s> 0)
        eax_20, ecx, edx_2 = sub_49f714(esi_1, "Cache-control", *(ebx_1 + 4))
    
    long double x87_r7 = fconvert.t(*(ebx_1 + 0x30))
    long double temp1 = fconvert.t(0f)
    x87_r7 - temp1
    eax_20.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe
    int32_t arg_4
    void* arg_8
    long double x87_r0
    
    if (not(test_bit(eax_20:1.b, 6)) && not(test_bit(eax_20:1.b, 0)))
        arg_8 = *(ebx_1 + 0x34)
        arg_4 = *(ebx_1 + 0x30)
        ebx_1, ebp_1, esi_1 = sub_49d978(0, x87_r0, edx_2, ecx)
        eax_20, ecx, edx_2 = sub_49f714(esi_1, "Date", ebp_1[-2])
    
    long double x87_r7_1 = fconvert.t(*(ebx_1 + 0x38))
    long double temp2 = fconvert.t(0f)
    x87_r7_1 - temp2
    eax_20.w = (x87_r7_1 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_20:1.b, 6)) && not(test_bit(eax_20:1.b, 0)))
        arg_8 = *(ebx_1 + 0x3c)
        arg_4 = *(ebx_1 + 0x38)
        ebx_1, ebp_1, esi_1 = sub_49d978(0, x87_r0, &ebp_1[-3], ecx)
        eax_20, ecx, edx_2 = sub_49f714(esi_1, "Expires", ebp_1[-3])
    
    long double x87_r7_2 = fconvert.t(*(ebx_1 + 0x40))
    long double temp3 = fconvert.t(0f)
    x87_r7_2 - temp3
    eax_20.w = (x87_r7_2 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp3) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp3 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_20:1.b, 6)) && not(test_bit(eax_20:1.b, 0)))
        arg_8 = *(ebx_1 + 0x44)
        arg_4 = *(ebx_1 + 0x40)
        ebx_1, ebp_1 = sub_49d860(&ebp_1[-4], edx_2, ecx)
        sub_49f714(esi_1, "Last-Modified", ebp_1[-4])
    
    if (sub_404078(*(ebx_1 + 0x48)) s> 0)
        sub_49f714(esi_1, "Pragma", *(ebx_1 + 0x48))
    
    if ((*(**(ebx_1 + 0x2c) + 0x14))() s> 0)
        (*(*esi_1 + 0x1c))()
        (*(**(ebx_1 + 0x2c) + 0x1c))()
        sub_404080(&ebp_1[-5], ebp_1[-6])
        ebp_1[-5]
        (*(*esi_1 + 0x2c))()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    arg4 = sub_4a1fad
    return sub_403e1c(&ebp_1[-6], 6)
}
