// ============================================================
// 函数名称: sub_4369b0
// 虚拟地址: 0x4369b0
// WARP GUID: 10cfd209-b39d-5cd0-a038-9fa9f6b6e0b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_4165dc
// [被调用的父级函数]: sub_426c98
// ============================================================

int32_t* __convention("regparm")sub_4369b0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4165dc(arg1, 0)
    arg1[0x14].b = 1
    *(arg1 + 0x59) = 1
    arg1[0x19] = 0xffffffff
    *(arg1 + 0x6a) = 1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
