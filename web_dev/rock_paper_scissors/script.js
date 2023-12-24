let score = {
    wins : 0,
    loses : 0,
    ties : 0
}; 
//console.log(JSON.parse((localStorage.getItem('score'))))
score = JSON.parse((localStorage.getItem('score')))

document.querySelector('.score').innerHTML = `<p>Wins : ${score.wins} Lost : ${score.loses} Ties : ${score.ties}</p>`;

function createRandomMove(){
    const randomnumber = Math.random();  
    if(randomnumber >= 0 && randomnumber< 1/3){
        computerMove = 'rock'
    }
    else if(randomnumber >= 1/3 && randomnumber< 2/3){
        computerMove = 'paper'
    }else{
        computerMove = 'scissors'
    }
    return computerMove
}

function playGame(click){
    let result = ''
    computerMove = createRandomMove()
    if(click === 'rock'){
        if(computerMove === 'rock'){
            result = 'Tie'
            score.ties +=1
        }
        else if(computerMove === 'paper'){
            result = 'You lose'
            score.loses+=1
        }
        else {
            result = 'You win'
            score.wins+=1
        }            
    }
    else if(click === 'paper'){
        if(computerMove === 'paper'){
            result = 'Tie'
            score.ties+=1
        }
        else if(computerMove === 'scissors'){
            result = 'You lose'
            score.loses+=1
        }
        else {
            result = 'You win'
            score.wins+=1
        }
    }
    else {
        if(computerMove === 'scissors'){
            result = 'Tie'
            score.ties+=1
        }
        else if(computerMove === 'rock'){
            result = 'You lose'
            score.loses+=1
        }
        else {
            result = 'You win'
            score.wins+=1
        }
    }
    localStorage.setItem('score',JSON.stringify(score))
    //alert(`You picked ${click}. Computer Picked ${computerMove}. You ${result} \nScore your wins ${score.wins} Your losse ${score.loses} Your ties ${score.ties}`)
    DisplayResult(result)
    displaymoves(click, computerMove)
    DisplayScore(score.wins, score.loses, score.ties)
    //console.log(score)
}

function resetScore(){
    score.wins = 0
    score.loses = 0
    score.ties = 0
    DisplayScore(score.wins, score.loses, score.ties)
}
function DisplayResult(result) {
    document.querySelector('.js-DisplayResult').innerHTML = `<p>${result}</p>`;
}
//console.log(document.querySelector('.js-DisplayResult').innerHTML)
function displaymoves (click, computerMove){
    document.querySelector('.move-image').innerHTML = `YOU 
    <img class="moveIcon" src="${click}-emoji.png">
    <img class="moveIcon" src="${computerMove}-emoji.png">
    Computer`;
}
function DisplayScore(wins, loses, ties) {
    document.querySelector('.score').innerHTML = `<p>Wins : ${wins} Lost : ${loses} Ties : ${ties}</p>`;
}

document.querySelector('.buttons_top_rock').addEventListener('click', () => {
    playGame('rock');
});
document.querySelector('.buttons_top_paper').addEventListener('click', () => {
    playGame('paper');
});
document.querySelector('.buttons_top_scissors').addEventListener('click', () => {
    playGame('rock');
});
function resetScore_display() {
    resetScore();
}
document.querySelector('.resetButton').addEventListener('click', resetScore_display);