// ============================================================
// 函数名称: sub_41725b
// 虚拟地址: 0x41725b
// WARP GUID: 9d34b78d-062f-5922-aa01-f01ab9bf2f5a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_417266
// [被调用的父级函数]: sub_416e58
// ============================================================

int32_t __convention("regparm")sub_41725b(void* arg1, uint16_t arg2, void* arg3, char* arg4 @ edi)
{
    // 第一条实际指令: *arg4 += arg1.b
    *arg4 += arg1.b
    
    if (arg1 != 0x9190b9ac)
        if (arg1 u>= 0x9190b9ac)
            jump(sub_4172a2+5)
        
        uint16_t* esi
        return sub_417266(arg1 + 0x6e6f4654, arg2, arg3, esi, arg4) __tailcall
    
    *(arg1 + 0x6e6f4654) += (arg1 + 0x6e6f4654).b
    void* esp = &__return_addr:2
    int32_t entry_ebx
    bool cond:0 = entry_ebx == 0xffffffff
    
    while (true)
        *(esp - 4) = 0x65737261
        esp -= 4
        
        if (not(cond:0))
            break
        
        *(esp + (arg3 << 2)) += arg2.b
        *(esp + ((arg3 + 1) << 2)) += entry_ebx.b + 1
        arg3 += 2
        *arg3 += (arg1 + 0x6e6f4654).b
        *(arg1 + 0x6e6f4654) += (arg1 + 0x6e6f4654).b
        *(arg1 + 0x6e6f4654) += (arg1 + 0x6e6f4654).b
        *(arg1 + 0x6e6f4654) += (arg1 + 0x6e6f4654).b
        *(arg1 + 0x6e6f4654) = *(arg1 + 0x6e6f4654)
        char temp3_1 = *(arg1 - 0x4e89b9ac)
        *(arg1 - 0x4e89b9ac) += (arg1 + 0x6e6f4654).b
        cond:0 = temp3_1 == neg.b((arg1 + 0x6e6f4654).b)
    
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg4, arg2, eflags)
    *edi = temp0
    *(arg1 + 0x6e6f4654) += entry_ebx.b + 1
    *(arg1 + 0x6e6f4654) += (arg1 + 0x6e6f4654).b
    undefined
}
