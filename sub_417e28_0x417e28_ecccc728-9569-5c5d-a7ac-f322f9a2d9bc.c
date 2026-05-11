// ============================================================
// 函数名称: sub_417e28
// 虚拟地址: 0x417e28
// WARP GUID: ecccc728-9569-5c5d-a7ac-f322f9a2d9bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_417d2c, sub_417d38
// [被调用的父级函数]: sub_417f50, sub_418c88, sub_417ed8, sub_418f50, sub_41876c
// ============================================================

void __convention("regparm")sub_417e28(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    sub_417d2c(arg1)
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg2[1] -= 1
    
    if (arg2[1] == 0)
        int32_t* eax_5 = *(arg1 + 4)
        
        if (eax_5 != arg2)
            while (true)
                int32_t* edx_1 = *eax_5
                
                if (edx_1 == arg2)
                    break
                
                eax_5 = edx_1
            
            *eax_5 = *arg2
        else
            *(arg1 + 4) = *arg2
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_18_1 = 0x417eb6
    sub_417d38(arg1)
}
