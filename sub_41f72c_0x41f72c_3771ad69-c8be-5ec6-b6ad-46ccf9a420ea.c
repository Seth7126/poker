// ============================================================
// 函数名称: sub_41f72c
// 虚拟地址: 0x41f72c
// WARP GUID: 3771ad69-c8be-5ec6-b6ad-46ccf9a420ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41f678, sub_419e24, sub_402d00, sub_4030a0, sub_41aebc, sub_412930
// [被调用的父级函数]: sub_41f958
// ============================================================

void __convention("regparm")sub_41f72c(int32_t* arg1)
{
    // 第一条实际指令: void* ebx = arg1[8]
    void* ebx = arg1[8]
    
    if (*(ebx + 0xc) != 0)
        return 
    
    if (*(ebx + 8) == 0)
        sub_419e24()
        noreturn
    
    int32_t edx
    edx.b = 1
    int32_t ecx
    int32_t* eax_1 = sub_4030a0(ecx, edx)
    int32_t __saved_ebp
    int32_t* var_20_1 = &__saved_ebp
    int32_t (* var_24_1)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_41f678(arg1) != data_53166c)
        sub_41aebc(0, sub_41f678(arg1))
    else
        void var_e
        sub_402d00(&var_e, 6, 0)
        sub_412930(eax_1, &var_e, 6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    *(ebx + 0xc) = eax_1
}
