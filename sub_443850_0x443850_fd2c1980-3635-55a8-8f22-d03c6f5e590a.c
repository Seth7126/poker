// ============================================================
// 函数名称: sub_443850
// 虚拟地址: 0x443850
// WARP GUID: fd2c1980-3635-55a8-8f22-d03c6f5e590a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, GetWindowLongA
// [内部子函数调用]: sub_44228c, sub_431bcc, sub_41631c, sub_403248, sub_416348, sub_43d768, sub_4318d0, sub_42e92c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_443850(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t dwNewLong = arg3
    int32_t dwNewLong = arg3
    sub_44228c(arg1, arg2)
    
    if (sub_431bcc(arg1) != 0)
        dwNewLong = GetWindowLongA(sub_4318d0(arg1), 0xffffffec) & 0xffff8fff
        sub_42e92c(arg1, &dwNewLong)
        SetWindowLongA(sub_4318d0(arg1), 0xffffffec, dwNewLong)
    
    int32_t result = sub_416348(arg1)
    
    if (result - 1 s>= 0)
        int32_t edi_2 = result
        int32_t esi_1 = 0
        int32_t i
        
        do
            result = sub_403248(sub_41631c(arg1, esi_1), 0x438a50)
            
            if (result.b != 0)
                result = sub_43d768(sub_41631c(arg1, esi_1))
            
            esi_1 += 1
            i = edi_2
            edi_2 -= 1
        while (i != 1)
    
    return result
}
