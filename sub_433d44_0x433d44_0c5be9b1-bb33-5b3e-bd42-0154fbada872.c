// ============================================================
// 函数名称: sub_433d44
// 虚拟地址: 0x433d44
// WARP GUID: 0c5be9b1-bb33-5b3e-bd42-0154fbada872
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433528, sub_433a98, sub_43334c
// [被调用的父级函数]: sub_433b34
// ============================================================

int32_t __fastcallsub_433d44(void* arg1, void* arg2, void* arg3 @ eax, char arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* var_8_1 = arg2
    arg2.b = 1
    void* ebx = sub_43334c(sub_428598+0x154, arg2, arg3)
    void* eax
    eax.b = arg5
    *(ebx + 0x10) = eax.b
    
    if (arg1 != 0)
        *(ebx + 0x20) = *(arg1 + 0x20)
        *(ebx + 0x14) = *(arg1 + 0x14)
        void* eax_22 = *(arg1 + 0x18)
        *(ebx + 0x18) = eax_22
        
        if (eax_22 != 0)
            *(eax_22 + 0xc) = ebx
        
        void* eax_23 = *(arg1 + 0xc)
        *(ebx + 0xc) = eax_23
        
        if (eax_23 != 0)
            *(eax_23 + 0x18) = ebx
        
        void* eax_24 = *(ebx + 0x14)
        
        if (arg1 == *(eax_24 + 8))
            *(eax_24 + 8) = ebx
        
        *(var_8_1 + 0x14) = ebx
        *(arg1 + 0x14) = ebx
        
        if (arg4 == 0)
            *(ebx + 8) = var_8_1
            *(arg1 + 0x18) = var_8_1
            *(arg1 + 0xc) = 0
            *(var_8_1 + 0xc) = arg1
        else
            *(ebx + 8) = arg1
            *(arg1 + 0x18) = 0
            *(arg1 + 0xc) = var_8_1
            *(var_8_1 + 0x18) = arg1
    else
        *(ebx + 0x20) = *(arg3 + 0x68)
        *(arg3 + 0x68) = *(*(arg3 + 0x64) + 0x20)
        int32_t eax_3
        eax_3.b = arg5
        *(arg3 + 0x48) = eax_3.b
        *(arg3 + 0x40) = 0
        *(arg3 + 0x44) = 0x3fe00000
        
        if (arg4 == 0)
            *(ebx + 8) = var_8_1
            void* eax_9 = *(arg3 + 0x64)
            *(eax_9 + 0x14) = ebx
            *(eax_9 + 0x18) = var_8_1
            *(var_8_1 + 0xc) = eax_9
            *(var_8_1 + 0x14) = ebx
            *(arg3 + 0x64) = ebx
            void* var_18_2 = arg3
            void (__convention("regparm")* var_1c_2)(void* arg1, void* arg2) = sub_434d5c
            sub_433a98(arg3, *(ebx + 8))
            int32_t eax_13 = *(*(arg3 + 0x64) + 0x20)
            int32_t eax_14 = eax_13 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_13 s>> 1 s< 0)
                eax_14 = adc.d(eax_14, 0, c_1)
            
            *(arg3 + 0x4c) = eax_14
            void* var_18_3 = arg3
            void (__convention("regparm")* var_1c_3)(void* arg1, void* arg2) = sub_4350b0
            sub_433a98(arg3, *(ebx + 8))
            int32_t eax_17 = *(*(arg3 + 0x64) + 0x20)
            int32_t eax_18 = eax_17 s>> 1
            bool c_2 = unimplemented  {sar eax, 0x1}
            
            if (eax_17 s>> 1 s< 0)
                eax_18 = adc.d(eax_18, 0, c_2)
            
            *(var_8_1 + 0x20) = eax_18
        else
            *(ebx + 8) = *(arg3 + 0x64)
            void* eax_5 = *(arg3 + 0x64)
            *(eax_5 + 0x14) = ebx
            *(eax_5 + 0xc) = var_8_1
            *(var_8_1 + 0x18) = eax_5
            *(var_8_1 + 0x14) = ebx
            *(arg3 + 0x64) = ebx
            void* var_18_1 = arg3
            void (__convention("regparm")* var_1c_1)(void* arg1, void* arg2) = sub_434d5c
            sub_433a98(arg3, *(ebx + 8))
        
        void* var_18_4 = arg3
        void (__convention("regparm")* var_1c_4)(void* arg1, void* arg2) = sub_4351cc
        sub_433a98(arg3, nullptr)
    
    sub_433528(ebx)
    void* var_18_5 = arg3
    void (__convention("regparm")* var_1c_5)(void* arg1, void* arg2) = sub_4351cc
    return sub_433a98(arg3, nullptr)
}
